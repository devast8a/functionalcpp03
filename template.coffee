global = (->this)()
fs = require 'fs'
path = require 'path'

filename = path.basename process.argv[1], '.coffee'
filename += ".hpp"

console.log "Generating #{filename}"

output = ""

process.on 'exit', ->
    fs.writeFileSync filename, output, 'utf-8'

global.format = (fmt, args...)->
    fmt.replace /(^|.+?)\{(\d+)\}/g, (_, start, pos)->
        indent = ""
        if /^\s+$/.test start
            indent = start

        start + (args[parseInt pos] ? "")
            .toString()
            .replace /\n/g, "\n" + indent

global.out = (text, args...)->
    output += format text, args...
    output += "\n"

global.list = (list, text, glue = ", ")->
    list.map (i)->
        format text, i
    .join glue

global.variadic = (i, max, unset, param, fmt)->
    if fmt?
        if i == max
            return ""

        params = [0...i].map (n)->format param,n
        params = params.concat [i...max].map (n)->format unset,n
        params = params.join ", "
        return format fmt, params

    if i == max
        param = "#{param}=#{unset}"

    return list [0...i], ", typename #{param}", ""



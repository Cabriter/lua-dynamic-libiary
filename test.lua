package.cpath = package.cpath .. ";./?.dylib"

print(package.cpath)
local mylib = require "libmylib"
local result = mylib.lsin(1)
print("C func sin : " .. result)

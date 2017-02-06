

# macOS
tested with: `OF0.9.7`
screen cast: https://vimeo.com/202735241

## googletest
1. clone googletest from https://github.com/google/googletest
2. build static library
	3. change LLVM settings on Build Setting for supporting C++11 
	4. archive it
	5. copy the static library to `/usr/local/lib`


## openframeworks
1. add new target as `Command Line Tool`
2. add `Run Script` to Build Phase  
```cp -f ../../../libs/fmodex/lib/osx/libfmodex.dylib "$TARGET_BUILD_DIR/libfmodex.dylib";
install_name_tool -change ./libfmodex.dylib @executable_path/libfmodex.dylib "$TARGET_BUILD_DIR/$PRODUCT_NAME";```
3. add the path to include folder of the googletest to your header search path e.g. `$(PROJECT_DIR)/../googletest/googletest/include`
4. add open frameworks static library to your Build Phases > Link Binary with Libraries
5. test your code
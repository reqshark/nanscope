# nanscope
random tidbit

make sure to check this out on `node v0.11`

after changing your node version, go into each dir and run this:
```bash
$ cd nanscope_function_call
$ make clean && make && make check
$ cd ../nonescope_function_call
$ make clean && make && make check
```
observe that difference in performance, especially in `type=cxx` between versions and what happens when nanscope(); is removed in `nonescope_function_call` on node before versions 0.11.14 or so

what the hell does this mean?

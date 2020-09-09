# SimpleGL

A few examples of getting up and running in classic OpenGL.
(currently targetting Emscripten)

[https://ariamokr.github.io/SimpleGL/nothing.html](https://ariamokr.github.io/SimpleGL/nothing.html)
```bash
emcc nothing.cpp -o nothing.html
```

[https://ariamokr.github.io/SimpleGL/hello.html](https://ariamokr.github.io/SimpleGL/hello.html)
```bash
emcc hello.cpp -o hello.html
```

[https://ariamokr.github.io/SimpleGL/triangle.html](https://ariamokr.github.io/SimpleGL/triangle.html)
```bash
emcc triangle.cpp -s LEGACY_GL_EMULATION -o triangle.html
```

[https://ariamokr.github.io/SimpleGL/trianglerotate.html](https://ariamokr.github.io/SimpleGL/trianglerotate.html)
```bash
emcc trianglerotate.cpp -s LEGACY_GL_EMULATION -o trianglerotate.html
```

## License
[MIT](https://choosealicense.com/licenses/mit/)

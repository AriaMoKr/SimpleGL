# SimpleGL

A few examples of getting up and running in classic OpenGL. Currently targetting [Emscripten](https://emscripten.org) - see [Emscripten - Getting Started](https://emscripten.org/docs/getting_started/index.html)

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

[https://ariamokr.github.io/SimpleGL/trianglerotatemouse.html](https://ariamokr.github.io/SimpleGL/trianglerotatemouse.html)
```bash
emcc trianglerotatemouse.cpp -s LEGACY_GL_EMULATION -o trianglerotatemouse.html
```

[https://ariamokr.github.io/SimpleGL/trianglerotatekeyboard.html](https://ariamokr.github.io/SimpleGL/trianglerotatekeyboard.html)
```bash
emcc trianglerotatekeyboard.cpp -s LEGACY_GL_EMULATION -o trianglerotatekeyboard.html
```

[https://ariamokr.github.io/SimpleGL/trianglecolor.html](https://ariamokr.github.io/SimpleGL/trianglecolor.html)
```bash
emcc trianglecolor.cpp -s LEGACY_GL_EMULATION -o trianglecolor.html
```

## License
[MIT](https://choosealicense.com/licenses/mit/)

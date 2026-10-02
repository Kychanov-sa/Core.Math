![Cover Art](https://mir-s3-cdn-cf.behance.net/project_modules/1400/990c7f49506829.58b6df8d46c74.png)

# GlacialBytes Core.Math

[![cmake-img]][cmake-url]
[![License][license-img]][license-url]

Фреймворк векторной математики для платформы GlacialBytes Core (далее просто Core).
Фреймворк состоит из трёх основных библиотек:
* Core.Math - основная библиотека, содержит базовые типы и функции для векторной и матричной алгебры;
* Core.Math.Utilities - библиотека содержит набор классов, расширяющих фунцкции базовых типов векторов и матриц;
* Core.Math.Auxiliaries - библиотека содержит дополнительные классы для работы с геометрией: лучи, различные ограничивающие объёмы, конус видимости и т.п.


## Core.Math

## Core.Math.Utilities

## Core.Math.Auxiliaries

## Подготовка

Предварительно установите:

* [Git](https://git-scm.com/)
* [CMake](https://cmake.org)
* [Visual Studio IDE](https://visualstudio.microsoft.com/downloads/) или компилятор, такой как [GCC](https://gcc.gnu.org/).

## Сборка проекта

```bash
# Клонируйте репозиторий
git clone https://github.com/Kychanov-sa/Core.Math --recurse-submodules

# Задите в
cd Core.Math

# Если вы забыли указать `recurse-submodules` можете выполнить сейчас:
git submodule update --init

# Создаёте папку build для результатов сборки
mkdir build
cd build

# Для сборки решения Visual Studio solution на Windows x64 выполните
cmake .. -A x64

# Для сборки .make файла на Linux
cmake ..

# Сброка на любой платформе
cmake --build .
```

## Использование библиотек

```cpp
#include <Core/Math/gm.h>

int main()
{
  return 0;
}
```

## Структура файлов проекта

```bash
├─ 📂 build/                       # Папка для результатов сборки
│  ├─ 📄 Core.Math.lib                 # файл статической библиотеки Core.Math (появляется после сборки)
│  ├─ 📄 Core.Math.Utilities.lib       # файл статической библиотеки Core.Math.Utilities (появляется после сборки)
│  └─ 📄 Core.Math.Auxiliaries.lib     # файл статической библиотеки Core.Math.Auxiliaries (появляется после сборки)
├─ 📂 doc/                         # Документация
├─ 📂 external/                    # Внешние зависимости
│  ├─ 📁 crosswindow/                  # 🖼️ OS Windows
│  ├─ 📁 crosswindow-graphics/         # 🎨 Vulkan Surface Creation
│  └─ 📁 glm/                          # ➕ Linear Algebra
├─ 📂 include/                     # Заголовочные файлы библиотеки
│  └─ 📁 Core/Math/                    # Заголовочные файлы библиотеки Core.Math (появляется после сборки)
│     ├─ 📄 gm.h                           # заголовочный файл библиотеки Core.Math
│     ├─ 📄 gmu.h                          # заголовочный файл библиотеки Core.Math.Utilities
│     ├─ 📄 gmaux.h                        # заголовочный файл библиотеки Core.Math.Auxiliaries
│     └─ 📄 *.inl                          # inline-файлы библиотек
├─ 📂 src/                         # Файлы исходного кода
│  ├─ 📁 Core.Math/                    # Проект библиотеки Core.Math
│  ├─ 📁 Core.Math.Auxiliaries/        # Проект библиотеки Core.Math.Auxiliaries
│  └─ 📁 Core.Math.Utilities/          # Проект Core.Math.Utilities
├─ 📂 test/                        # Проекты тестов
│  ├─ 📁 Core.Math.Test/               # Проект модульных тестов библиотеки Core.Math
│  ├─ 📁 Core.Math.Auxiliaries.Test/   # Проект модульных тестов библиотеки Core.Math.Auxiliaries
│  └─ 📁 Core.Math.Utilities.Test/     # Проект модульных тестов библиотеки Core.Math.Utilities
├─ 📄 .gitignore                   # Список игнорироваиня для репозитория Git
├─ 📄 Core.Math.sln                # Файл решения для Visual Studio IDE
├─ 📄 CMakeLists.txt               # 🔨 Build Script
├─ 📄 LICENSE                      # Файл лицензии
└─ 📃 README.md                    # Этот файл
```

[cmake-img]: https://img.shields.io/badge/cmake-3.6-1f9948.svg?style=flat-square
[cmake-url]: https://cmake.org/
[license-img]: https://img.shields.io/:license-mit-blue.svg?style=flat-square
[license-url]: https://opensource.org/licenses/MIT
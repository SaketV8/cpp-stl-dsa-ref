## Contributing Guidelines

> [!TIP]
> Contributions are welcome and highly appreciated!

## File Struture

```
.
├── CONTRIBUTING.md
├── LICENSE
├── README.md
├── assets
│   └── CPP STL.png
├── build.py
├── cpp-stl-code
│   ├── 0. Getting Started
│   │   └── main.cpp
│   └── 1. *********
└── utils
    ├── POST_README.md
    └── PRE_README.md
```


## How to Make Changes

Follow the steps given below:

1. Clone the repository or, if you have already cloned it, make sure to fetch the latest changes using `git pull origin main`.

2. Create a folder named appropriately, like `Queue`, inside `cpp-stl-code`, prefixed with a number (`1`, `2`, or `3`), based on the ordering.

3. Create a file named `main.cpp` inside the newly created folder. You can take reference from `cpp-stl-code/1. Vector/main.cpp`.

4. Make changes while following the instructions below.

> [!NOTE]
> - Create a separate branch for your changes:
>   - Use a branch name like `<stl-queue-init>` if creating a new STL reference.
>   - Use a branch name like `<stl-queue-fix-1>` if fixing or updating an existing STL reference.
>   - Use meaningful names for branches that clearly describe their purpose.



5. After making changes, run the `build.py` script to automatically generate updates from `cpp-stl-code/`.

```sh
python build.py
```

> [!WARNING]
> After successfull `build.py` execution it will say `Now you can commit changes to github.com 😻`
> then you can push your changes

6. After building don't forget to check the `<TODO>` in `utils/POST_README.md`

7. Submit a pull request. Your changes will be merged after a review.

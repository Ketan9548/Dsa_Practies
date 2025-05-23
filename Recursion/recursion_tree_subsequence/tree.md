if arr = {2,4,3};

Start: index = 0, temp = []

├── ✅ Include 2 → temp = [2]
│ ├── ✅ Include 4 → temp = [2, 4]
│ │ ├── ✅ Include 1 → temp = [2, 4, 1] → store in result
│ │ └── ❌ Exclude 1 → temp = [2, 4] → store in result
│ └── ❌ Exclude 4 → temp = [2]
│ ├── ✅ Include 1 → temp = [2, 1] → store in result
│ └── ❌ Exclude 1 → temp = [2] → store in result
└── ❌ Exclude 2 → temp = []
├── ✅ Include 4 → temp = [4]
│ ├── ✅ Include 1 → temp = [4, 1] → store in result
│ └── ❌ Exclude 1 → temp = [4] → store in result
└── ❌ Exclude 4 → temp = []
├── ✅ Include 1 → temp = [1] → store in result
└── ❌ Exclude 1 → temp = [] → store in result
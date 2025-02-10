# Buffers

## Overview

Buffers is a C++ application that automatically clears system buffers and caches every 30 minute. It follows a clean architecture and logs each cleaning operation to track successes and failures.

## Features

- Automatically clears system buffers and caches.
- Logs successful and failed cleaning attempts.
- Uses multi-threading for scheduled execution.
- Designed with clean architecture for maintainability.

## Prerequisites

- Linux-based operating system (Tested on Ubuntu)
- g++ (C++17 or later)
- Make

## Installation

1. Clone the repository:

   ```sh
   git clone https://github.com/your-repo/buffers.git
   cd buffers
   ```

2. Build the project:

   ```sh
   make
   ```

3. Run the application:
   ```sh
   ./auto_clean
   ```

## Directory Structure

```
buffers/
│-- src/
│   ├── main.cpp         # Entry point of the application
│   ├── services/
│   │   ├── CacheCleaner.cpp  # Handles cache cleaning logic
│   │   ├── CacheCleaner.h    # Header file for CacheCleaner
│   ├── utils/
│   │   ├── Logger.cpp  # Logs cleaning operations
│   │   ├── Logger.h    # Header file for Logger
│-- logs/
│   ├── cache_cleaner.log  # Log file for cleaning events
│-- Makefile               # Build automation
│-- README.md              # Project documentation
```

## Logging

All cleaning operations are logged in `logs/cache_cleaner.log`. The logs contain timestamps and status messages indicating whether the operation was successful.

## License

This project is licensed under the MIT License.

## Contributing

Contributions are welcome! Feel free to fork the repository and submit a pull request.

## Author

- Syaiful Imanudin
- Email: saipulimdn@gmail.com
- GitHub: [saipulimdn](https://github.com/saipulimdn)

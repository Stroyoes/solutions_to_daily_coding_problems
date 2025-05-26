# `How to run the solutions`

## **C**
- Use the provided `Makefile` to build and run the C programs.
- To compile and run:
  ```bash
  make        # compiles all necessary files
  ./test      # runs the test executable

* Or compile manually:

  ```bash
  gcc -o test test.c sum_of_evens.c
  ./test
  ```

## **JavaScript (JS)**

* Ensure you have [Node.js](https://nodejs.org/) installed.
* To install dependencies (if any):

  ```bash
  npm install
  ```
* To run tests:

  ```bash
  node test_sum_of_evens.js
  ```

## **Python**

* Requires Python 3.10+ (tested on 3.13).
* Install dependencies listed in `needs.txt` (if any):

  ```bash
  pip install -r needs.txt
  ```

* To run tests (recommended pytest):

  ```bash
  pytest test_sum_of_evens.py
  ```
  OR 

  ```bash 
  pytest
  ```

## **TypeScript**

* Requires [Deno](https://deno.land/) runtime.

* To run tests:

  ```bash
  deno test --allow-read test.ts
  ```


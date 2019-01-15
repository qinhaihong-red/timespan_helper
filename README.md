## Usage
- Before any routines you want to record time eplase, declare a class instance __*time_span ts*__ and it will be automatically initiated with current time.


- After that routine, call __*double result=ts.stop()*__ to retrieve elapsed time in __seconds__ as default. Or passes __*false*__ to __*stop()*__ function,which you will get elapsed time in __milliseconds__.


- Reuses the same instance as much as you want just call __*ts.start()*__ before next recording.


## Warning
Without thread-safe consideration.
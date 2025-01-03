/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver {
    id /* block */  _block;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _intervalRequested;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastIntervalUsed;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastNonperiodicFireTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastPeriodicFireTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastStopTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _nonPeriodicOffset;
    unsigned int  _sequenceNum;
}

- (void)_effectiveRateChanged;
- (void)_fireBlockForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)dealloc;
- (void)initGutsWithTimebase:(struct OpaqueCMTimebase { }*)arg1 interval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 offset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 queue:(id)arg4 block:(id /* block */)arg5;
- (id)initWithTimebase:(struct OpaqueCMTimebase { }*)arg1 interval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 offset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 queue:(id)arg4 block:(id /* block */)arg5;
- (id)initWithTimebase:(struct OpaqueCMTimebase { }*)arg1 interval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 queue:(id)arg3 block:(id /* block */)arg4;

@end

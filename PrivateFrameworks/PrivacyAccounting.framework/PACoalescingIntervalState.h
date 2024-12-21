/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrivacyAccounting.framework/PrivacyAccounting
 */

@interface PACoalescingIntervalState : NSObject {
    long long  _accessCount;
    NSSet * _assetIdentifiers;
    id /* block */  _clock;
    NSObject<OS_dispatch_source> * _endTimer;
    PAAccessInterval * _interval;
    double  _intervalEndTime;
    unsigned long long  _lastCoalescedTime;
    NSObject<OS_dispatch_source> * _sigTermSource;
    struct PATimes { 
        unsigned long long absolute; 
        unsigned long long continuous; 
    }  _startTimes;
}

@property (nonatomic) long long accessCount;
@property (nonatomic, readonly) NSSet *assetIdentifiers;
@property (nonatomic, copy) id /* block */ clock;
@property (nonatomic, readonly) double idleTime;
@property (nonatomic, readonly) PAAccessInterval *interval;
@property (nonatomic) double intervalEndTime;
@property (nonatomic, readonly) double timestampAdjustment;

- (void).cxx_destruct;
- (long long)accessCount;
- (id)assetIdentifiers;
- (id /* block */)clock;
- (void)dealloc;
- (id)description;
- (double)idleTime;
- (id)initWithInterval:(id)arg1 intervalExpirationTime:(double)arg2 expiryQueue:(id)arg3 clock:(id /* block */)arg4 onExpiration:(id /* block */)arg5;
- (id)initWithInterval:(id)arg1 intervalExpirationTime:(double)arg2 expiryQueue:(id)arg3 clock:(id /* block */)arg4 onExpiration:(id /* block */)arg5 expiry:(double)arg6;
- (id)initWithInterval:(id)arg1 matcher:(id)arg2 tracker:(id)arg3;
- (id)initWithInterval:(id)arg1 matcher:(id)arg2 tracker:(id)arg3 expiry:(double)arg4;
- (id)interval;
- (double)intervalEndTime;
- (void)invalidate;
- (void)setAccessCount:(long long)arg1;
- (void)setClock:(id /* block */)arg1;
- (void)setIntervalEndTime:(double)arg1;
- (double)timestampAdjustment;
- (void)touch;

@end
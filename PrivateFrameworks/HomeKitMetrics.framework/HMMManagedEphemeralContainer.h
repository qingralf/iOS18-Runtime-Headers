/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMetrics.framework/HomeKitMetrics
 */

@interface HMMManagedEphemeralContainer : NSObject {
    bool  _active;
    double  _activeDuration;
    NSString * _containerName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _startTime;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) double activeDuration;
@property (nonatomic, readonly, copy) NSString *containerName;
@property (nonatomic) double startTime;

- (void).cxx_destruct;
- (double)activeDuration;
- (id)containerName;
- (id)initWithContainerName:(id)arg1;
- (bool)isActive;
- (void)setActive:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end

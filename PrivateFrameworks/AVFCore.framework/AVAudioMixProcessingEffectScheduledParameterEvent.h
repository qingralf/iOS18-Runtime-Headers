/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAudioMixProcessingEffectScheduledParameterEvent : NSObject {
    NSArray * _parameters;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

+ (id)eventWithParameters:(id)arg1 at:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

- (id)_figSchedule;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithParameters:(id)arg1 at:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)isEqual:(id)arg1;
- (id)parameters;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
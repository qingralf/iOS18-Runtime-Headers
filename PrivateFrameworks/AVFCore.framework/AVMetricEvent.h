/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMetricEvent : NSObject <NSSecureCoding> {
    NSDate * _date;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _mediaTime;
    NSString * _sessionID;
}

@property (readonly) NSDate *date;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } mediaTime;
@property (readonly) NSString *sessionID;

+ (bool)supportsSecureCoding;

- (id)date;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionForAttr;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 mediaTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 sessionID:(id)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })mediaTime;
- (id)sessionID;

@end

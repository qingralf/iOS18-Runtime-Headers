/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMetricContentKeyRequestEvent : AVMetricEvent {
    AVContentKeySpecifier * _contentKeySpecifier;
    bool  _isClientInitiated;
    AVMetricMediaResourceRequestEvent * _mediaResourceRequestEvent;
    NSString * _mediaType;
}

@property (readonly) AVContentKeySpecifier *contentKeySpecifier;
@property (readonly) bool isClientInitiated;
@property (readonly) AVMetricMediaResourceRequestEvent *mediaResourceRequestEvent;
@property (readonly) NSString *mediaType;

+ (bool)supportsSecureCoding;

- (id)contentKeySpecifier;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 mediaTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 sessionID:(id)arg3 contentKeySpecifier:(id)arg4 mediaType:(id)arg5 isClientInitiated:(bool)arg6 mediaResourceRequestEvent:(id)arg7;
- (bool)isClientInitiated;
- (id)mediaResourceRequestEvent;
- (id)mediaType;

@end
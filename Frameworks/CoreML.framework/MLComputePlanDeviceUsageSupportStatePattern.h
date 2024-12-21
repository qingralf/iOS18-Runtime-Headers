/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLComputePlanDeviceUsageSupportStatePattern : NSObject {
    NSRegularExpression * _regex;
    long long  _supportState;
}

@property (nonatomic, readonly) NSRegularExpression *regex;
@property (nonatomic, readonly) long long supportState;

+ (id)deviceUsageSupportStatePatternWithPattern:(id)arg1 supportState:(long long)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPattern:(id)arg1 supportState:(long long)arg2;
- (bool)isMatchForValidationMessage:(id)arg1;
- (id)regex;
- (long long)supportState;

@end
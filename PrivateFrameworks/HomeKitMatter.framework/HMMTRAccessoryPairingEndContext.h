/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter
 */

@interface HMMTRAccessoryPairingEndContext : HMFObject {
    NSError * _error;
    NSString * _sourceErrorDomain;
    NSNumber * _step;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *sourceErrorDomain;
@property (nonatomic, readonly) NSNumber *step;

+ (id)hapContextWithStep:(unsigned long long)arg1 error:(id)arg2;
+ (id)hmmtrContextWithCancelledError:(id)arg1;
+ (id)hmmtrContextWithStep:(unsigned long long)arg1 error:(id)arg2;
+ (id)mtrContextWithStep:(unsigned long long)arg1 error:(id)arg2;
+ (id)otherContextWithStep:(unsigned long long)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)error;
- (id)initWithStep:(id)arg1 error:(id)arg2 sourceErrorDomain:(id)arg3;
- (id)sourceErrorDomain;
- (id)step;

@end
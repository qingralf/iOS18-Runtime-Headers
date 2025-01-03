/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRemoteLineWrappingRequest : NSObject <NSSecureCoding> {
    bool  _enableCachingIfAvailable;
    NSArray * _lineWrappableGroups;
    NSDictionary * _options;
}

@property (nonatomic, readonly) bool enableCachingIfAvailable;
@property (nonatomic, readonly) NSArray *lineWrappableGroups;
@property (nonatomic, copy) NSDictionary *options;

+ (Class)classForKeyedUnarchiver;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)enableCachingIfAvailable;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLineWrappableGroups:(id)arg1 options:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemoteLineWrappingRequest:(id)arg1;
- (id)lineWrappableGroups;
- (id)options;
- (void)setOptions:(id)arg1;

@end

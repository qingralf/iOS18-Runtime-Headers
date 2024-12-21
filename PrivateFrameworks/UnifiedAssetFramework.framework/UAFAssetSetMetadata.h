/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UnifiedAssetFramework.framework/UnifiedAssetFramework
 */

@interface UAFAssetSetMetadata : NSObject {
    NSString * _maxOSVersion;
    NSString * _minOSVersion;
}

@property (nonatomic, retain) NSString *maxOSVersion;
@property (nonatomic, retain) NSString *minOSVersion;

+ (id)OSVersion;
+ (id)fromAssetDir:(id)arg1 error:(id*)arg2;
+ (id)fromContentsOfURL:(id)arg1 error:(id*)arg2;
+ (bool)isValid:(id)arg1 error:(id*)arg2;
+ (id)supportedFileVersions;

- (void).cxx_destruct;
- (bool)OSSupported;
- (id)initWithDictionary:(id)arg1;
- (id)maxOSVersion;
- (id)minOSVersion;
- (void)setMaxOSVersion:(id)arg1;
- (void)setMinOSVersion:(id)arg1;

@end
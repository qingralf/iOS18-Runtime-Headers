/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UnifiedAssetFramework.framework/UnifiedAssetFramework
 */

@interface UAFPrestageConfiguration : NSObject {
    NSString * _name;
    NSArray * _usages;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *usages;

+ (id)fromContentsOfURL:(id)arg1 error:(id*)arg2;
+ (bool)isValid:(id)arg1 error:(id*)arg2;
+ (bool)predicateMatch:(id)arg1;
+ (id)supportedFileVersions;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)mergeAssetSetUsages:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setUsages:(id)arg1;
- (id)usages;
- (id)usages:(id)arg1;

@end
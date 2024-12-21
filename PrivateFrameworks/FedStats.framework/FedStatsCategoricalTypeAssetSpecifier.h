/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FedStats.framework/FedStats
 */

@interface FedStatsCategoricalTypeAssetSpecifier : NSObject {
    NSString * _assetSpecifierKey;
    bool  _isDynamic;
    bool  _isRequiredForCollectionKey;
    NSRegularExpression * _regex;
}

@property (nonatomic, readonly, copy) NSString *assetSpecifierKey;
@property (nonatomic, readonly) bool isDynamic;
@property (nonatomic, readonly) bool isRequiredForCollectionKey;
@property (readonly, copy) NSRegularExpression *regex;

+ (id)assetSpecifierWithKey:(id)arg1 requiredForCollectionKey:(bool)arg2 error:(id*)arg3;
+ (id)mutateParameters:(id)arg1 forKey:(id)arg2 usingFieldValues:(id)arg3 assetURLs:(id)arg4 requiredFields:(id*)arg5 assetNames:(id*)arg6 error:(id*)arg7;

- (void).cxx_destruct;
- (id)assetSpecifierKey;
- (id)assetSpecifierValueForDataPoint:(id)arg1 error:(id*)arg2;
- (id)initWithAssetSpecifierKey:(id)arg1 dynamic:(bool)arg2 requiredForCollectionKey:(bool)arg3;
- (bool)isDynamic;
- (bool)isRequiredForCollectionKey;
- (id)parameters;
- (id)regex;

@end
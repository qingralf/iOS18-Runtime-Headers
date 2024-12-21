/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconFoundation.framework/IconFoundation
 */

@interface IFPlistParser : NSObject {
    NSDictionary * _infoDictionary;
}

@property (readonly, copy) NSString *catalogAssetName;
@property (readonly, copy) NSDictionary *iconContent;
@property (readonly, copy) NSDictionary *iconDictionary;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly) unsigned long long supportedPlatform;

+ (id)catalogAssetExcerptForAssetName:(id)arg1 style:(unsigned long long)arg2;
+ (id)fileAssetsExcerptForFilenames:(id)arg1 style:(unsigned long long)arg2;
+ (id)grahpicIconExcerptForConfigDictionary:(id)arg1;
+ (id)topLevelAppBundleIconKeys;

- (void).cxx_destruct;
- (id)catalogAssetName;
- (id)catalogAssetNamesReturningPlistExcerpt:(id*)arg1;
- (bool)hasGraphicIconReturningPlistExcerpt:(id*)arg1;
- (id)iconContent;
- (id)iconContentForAlternateIconName:(id)arg1 variants:(id)arg2;
- (id)iconDictionary;
- (id)infoDictionary;
- (id)initWithInfoDictionary:(id)arg1;
- (id)looseFilesNamesReturningPlistExcerpt:(id*)arg1;
- (unsigned long long)supportedPlatform;

@end
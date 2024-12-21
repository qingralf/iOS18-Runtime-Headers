/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KoaMapper.framework/KoaMapper
 */

@interface KMLaunchServicesBridge : NSObject <KMProviderDatasetBridge> {
    NSDictionary * _additionalFields;
    KVItemMapper * _itemMapper;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allInstalledAppBundleIdentifiers;

- (void).cxx_destruct;
- (id)_appEnumerator;
- (bool)_checkAppValidity:(id)arg1;
- (id)_getOverrideByInfoPlist:(id)arg1;
- (unsigned short)cascadeItemType;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithLanguageCode:(id)arg1;
- (id)originAppId;

@end
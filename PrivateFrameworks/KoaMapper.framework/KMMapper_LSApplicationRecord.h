/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KoaMapper.framework/KoaMapper
 */

@interface KMMapper_LSApplicationRecord : NSObject <KMMapper> {
    KVItemBuilder * _builder;
    NSNumber * _languageCodeKey;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)externalObjectClass;

- (void).cxx_destruct;
- (bool)addAlternativeNamesFor:(id)arg1 forLanguage:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id*)arg3;
- (long long)targetItemType;

@end
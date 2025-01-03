/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBRequestProductPageCommand : PBCodable <NSSecureCoding, _SFPBRequestProductPageCommand> {
    NSString * _distributorBundleIdentifier;
    unsigned long long  _itemIdentifier;
    unsigned long long  _versionIdentifier;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *distributorBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long itemIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long versionIdentifier;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)distributorBundleIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemIdentifier;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDistributorBundleIdentifier:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setVersionIdentifier:(unsigned long long)arg1;
- (unsigned long long)versionIdentifier;
- (void)writeTo:(id)arg1;

@end

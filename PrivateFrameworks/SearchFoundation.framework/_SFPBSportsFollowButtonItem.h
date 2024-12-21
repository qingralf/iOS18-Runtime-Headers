/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBSportsFollowButtonItem : PBCodable <NSSecureCoding, _SFPBSportsFollowButtonItem> {
    NSString * _fallbackTitle;
    _SFPBSportsItem * _sportsItem;
    _SFPBToggleButtonConfiguration * _toggleButtonConfiguration;
    unsigned long long  _uniqueId;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fallbackTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBSportsItem *sportsItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBToggleButtonConfiguration *toggleButtonConfiguration;
@property (nonatomic) unsigned long long uniqueId;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)fallbackTitle;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFallbackTitle:(id)arg1;
- (void)setSportsItem:(id)arg1;
- (void)setToggleButtonConfiguration:(id)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (id)sportsItem;
- (id)toggleButtonConfiguration;
- (unsigned long long)uniqueId;
- (void)writeTo:(id)arg1;

@end
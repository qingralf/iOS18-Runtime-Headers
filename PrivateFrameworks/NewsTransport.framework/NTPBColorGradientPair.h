/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBColorGradientPair : PBCodable <NSCopying> {
    NTPBColorGradient * _dark;
    NTPBColorGradient * _light;
}

@property (nonatomic, retain) NTPBColorGradient *dark;
@property (nonatomic, readonly) bool hasDark;
@property (nonatomic, readonly) bool hasLight;
@property (nonatomic, retain) NTPBColorGradient *light;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dark;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDark;
- (bool)hasLight;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)light;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDark:(id)arg1;
- (void)setLight:(id)arg1;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable <NSCopying> {
    int  _configuration;
    int  _configurationExtension;
    struct { 
        unsigned int configurationExtension : 1; 
    }  _has;
    unsigned int  _maxBandwidth;
}

@property (nonatomic) int configuration;
@property (nonatomic) int configurationExtension;
@property (nonatomic) bool hasConfigurationExtension;
@property (nonatomic) unsigned int maxBandwidth;

+ (int)bandwidthConfigurationFor2GWithArbiterMode:(unsigned char)arg1;
+ (int)bandwidthConfigurationFor3GWithArbiterMode:(unsigned char)arg1;
+ (int)bandwidthConfigurationFor5GWithArbiterMode:(unsigned char)arg1;
+ (int)bandwidthConfigurationForAWDLWithArbiterMode:(unsigned char)arg1;
+ (int)bandwidthConfigurationForLTEWithArbiterMode:(unsigned char)arg1;
+ (int)bandwidthConfigurationForUSBWithArbiterMode:(unsigned char)arg1;
+ (int)bandwidthConfigurationForWiFiWithArbiterMode:(unsigned char)arg1;
+ (int)bandwidthConfigurationForWiredWithArbiterMode:(unsigned char)arg1;
+ (int)bandwidthConfigurationWithArbiterMode:(unsigned char)arg1 connectionType:(int)arg2;

- (int)StringAsConfiguration:(id)arg1;
- (int)StringAsConfigurationExtension:(id)arg1;
- (int)configuration;
- (id)configurationAsString:(int)arg1;
- (int)configurationExtension;
- (id)configurationExtensionAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfigurationExtension;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxBandwidth;
- (void)mergeFrom:(id)arg1;
- (id)newBandwidthConfigurations;
- (bool)readFrom:(id)arg1;
- (void)setConfiguration:(int)arg1;
- (void)setConfigurationExtension:(int)arg1;
- (void)setHasConfigurationExtension:(bool)arg1;
- (void)setMaxBandwidth:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end

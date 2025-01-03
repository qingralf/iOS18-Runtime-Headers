/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface COMAPPLEPROACTIVEGMSGMSPETUploadEvent : PBCodable <NSCopying> {
    COMAPPLEPETCOMMONPETMetadata * _metadata;
    COMAPPLEPROACTIVEGMSGMSUberEvent * _uberEvent;
}

@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasUberEvent;
@property (nonatomic, retain) COMAPPLEPETCOMMONPETMetadata *metadata;
@property (nonatomic, retain) COMAPPLEPROACTIVEGMSGMSUberEvent *uberEvent;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMetadata;
- (bool)hasUberEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setUberEvent:(id)arg1;
- (id)uberEvent;
- (void)writeTo:(id)arg1;

@end

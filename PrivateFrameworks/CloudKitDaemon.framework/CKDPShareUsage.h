/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareUsage : PBCodable <NSCopying> {
    CKDPIdentifier * _deviceIdentifier;
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSString * _participantHandle;
    CKDPShareIdentifier * _shareIdentifier;
    CKDPDate * _time;
    CKDPIdentifier * _userIdentifier;
    int  _version;
}

@property (nonatomic, retain) CKDPIdentifier *deviceIdentifier;
@property (nonatomic, readonly) bool hasDeviceIdentifier;
@property (nonatomic, readonly) bool hasParticipantHandle;
@property (nonatomic, readonly) bool hasShareIdentifier;
@property (nonatomic, readonly) bool hasTime;
@property (nonatomic, readonly) bool hasUserIdentifier;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *participantHandle;
@property (nonatomic, retain) CKDPShareIdentifier *shareIdentifier;
@property (nonatomic, retain) CKDPDate *time;
@property (nonatomic, retain) CKDPIdentifier *userIdentifier;
@property (nonatomic) int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasDeviceIdentifier;
- (bool)hasParticipantHandle;
- (bool)hasShareIdentifier;
- (bool)hasTime;
- (bool)hasUserIdentifier;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantHandle;
- (bool)readFrom:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setParticipantHandle:(id)arg1;
- (void)setShareIdentifier:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setVersion:(int)arg1;
- (id)shareIdentifier;
- (id)time;
- (id)userIdentifier;
- (int)version;
- (void)writeTo:(id)arg1;

@end

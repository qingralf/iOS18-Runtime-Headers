/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMPBCommandContainer : PBCodable <NSCopying> {
    HMPBAccessoryReference * _accessoryReference;
    NSData * _clusterID;
    NSData * _commandFields;
    NSData * _commandID;
    NSData * _endpointID;
    NSData * _expectedValues;
}

@property (nonatomic, retain) HMPBAccessoryReference *accessoryReference;
@property (nonatomic, retain) NSData *clusterID;
@property (nonatomic, retain) NSData *commandFields;
@property (nonatomic, retain) NSData *commandID;
@property (nonatomic, retain) NSData *endpointID;
@property (nonatomic, retain) NSData *expectedValues;
@property (nonatomic, readonly) bool hasAccessoryReference;
@property (nonatomic, readonly) bool hasClusterID;
@property (nonatomic, readonly) bool hasCommandFields;
@property (nonatomic, readonly) bool hasCommandID;
@property (nonatomic, readonly) bool hasEndpointID;
@property (nonatomic, readonly) bool hasExpectedValues;

- (void).cxx_destruct;
- (id)accessoryReference;
- (id)clusterID;
- (id)commandFields;
- (id)commandID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endpointID;
- (id)expectedValues;
- (bool)hasAccessoryReference;
- (bool)hasClusterID;
- (bool)hasCommandFields;
- (bool)hasCommandID;
- (bool)hasEndpointID;
- (bool)hasExpectedValues;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessoryReference:(id)arg1;
- (void)setClusterID:(id)arg1;
- (void)setCommandFields:(id)arg1;
- (void)setCommandID:(id)arg1;
- (void)setEndpointID:(id)arg1;
- (void)setExpectedValues:(id)arg1;
- (void)writeTo:(id)arg1;

@end

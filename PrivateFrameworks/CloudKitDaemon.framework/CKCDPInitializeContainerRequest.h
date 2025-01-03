/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKCDPInitializeContainerRequest : PBRequest <NSCopying> {
    NSString * _containerName;
    NSString * _environment;
    NSString * _path;
}

@property (nonatomic, retain) NSString *containerName;
@property (nonatomic, retain) NSString *environment;
@property (nonatomic, readonly) bool hasContainerName;
@property (nonatomic, readonly) bool hasEnvironment;
@property (nonatomic, readonly) bool hasPath;
@property (nonatomic, retain) NSString *path;

- (void).cxx_destruct;
- (id)containerName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environment;
- (bool)hasContainerName;
- (bool)hasEnvironment;
- (bool)hasPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)path;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setContainerName:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end

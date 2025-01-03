/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordOneTimeStableUrlInfo : PBCodable <NSCopying> {
    NSMutableArray * _oneTimeUrls;
}

@property (nonatomic, retain) NSMutableArray *oneTimeUrls;

+ (Class)oneTimeUrlType;

- (void).cxx_destruct;
- (void)addOneTimeUrl:(id)arg1;
- (void)clearOneTimeUrls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)oneTimeUrlAtIndex:(unsigned long long)arg1;
- (id)oneTimeUrls;
- (unsigned long long)oneTimeUrlsCount;
- (bool)readFrom:(id)arg1;
- (void)setOneTimeUrls:(id)arg1;
- (void)writeTo:(id)arg1;

@end

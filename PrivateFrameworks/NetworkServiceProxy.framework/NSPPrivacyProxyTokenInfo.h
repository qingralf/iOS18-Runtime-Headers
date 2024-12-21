/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPPrivacyProxyTokenInfo : PBCodable <NSCopying> {
    NSString * _proxyURL;
    NSData * _tokenKeyID;
    NSMutableArray * _tokenRequestLists;
    NSMutableArray * _unactivatedTokenLists;
    NSString * _vendor;
}

@property (nonatomic, readonly) bool hasVendor;
@property (nonatomic, retain) NSString *proxyURL;
@property (nonatomic, retain) NSData *tokenKeyID;
@property (nonatomic, retain) NSMutableArray *tokenRequestLists;
@property (nonatomic, retain) NSMutableArray *unactivatedTokenLists;
@property (nonatomic, retain) NSString *vendor;

+ (Class)tokenRequestListType;
+ (Class)unactivatedTokenListType;

- (void).cxx_destruct;
- (void)addTokenRequestList:(id)arg1;
- (void)addUnactivatedTokenList:(id)arg1;
- (void)clearTokenRequestLists;
- (void)clearUnactivatedTokenLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVendor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)proxyURL;
- (bool)readFrom:(id)arg1;
- (void)setProxyURL:(id)arg1;
- (void)setTokenKeyID:(id)arg1;
- (void)setTokenRequestLists:(id)arg1;
- (void)setUnactivatedTokenLists:(id)arg1;
- (void)setVendor:(id)arg1;
- (id)tokenKeyID;
- (id)tokenRequestListAtIndex:(unsigned long long)arg1;
- (id)tokenRequestLists;
- (unsigned long long)tokenRequestListsCount;
- (id)unactivatedTokenListAtIndex:(unsigned long long)arg1;
- (id)unactivatedTokenLists;
- (unsigned long long)unactivatedTokenListsCount;
- (id)vendor;
- (void)writeTo:(id)arg1;

@end
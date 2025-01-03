/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPlayInfoResponse : NSObject <NSCopying, SSXPCCoding> {
    NSError * _error;
    NSData * _playInfoData;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *playInfoData;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithPlayInfoData:(id)arg1 error:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)playInfoData;

@end

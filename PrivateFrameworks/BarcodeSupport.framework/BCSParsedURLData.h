/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSParsedURLData : NSObject <BCSParsedDataPrivate> {
    NSString * _extraPreviewText;
    NSString * _preferredBundleID;
    long long  _type;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extraPreviewText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *preferredBundleID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)extraPreviewText;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 type:(long long)arg2;
- (id)initWithURL:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3;
- (id)initWithURL:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3 preferredBundleID:(id)arg4;
- (id)preferredBundleID;
- (long long)type;
- (id)url;

@end

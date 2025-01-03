/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSContactData : NSObject <BCSParsedDataPrivate> {
    CNContact * _contact;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extraPreviewText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (void)encodeWithCoder:(id)arg1;
- (id)extraPreviewText;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (long long)type;

@end

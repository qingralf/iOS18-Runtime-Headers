/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNSpeakableStringDialog : LNDialog <NSSecureCoding> {
    LNSpeakableString * _fullSpeakableString;
    LNSpeakableString * _supportingSpeakableString;
    NSString * _systemImageName;
}

@property (nonatomic, readonly, copy) LNSpeakableString *fullSpeakableString;
@property (nonatomic, readonly, copy) LNSpeakableString *supportingSpeakableString;
@property (nonatomic, readonly, copy) NSString *systemImageName;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullSpeakableString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullSpeakableString:(id)arg1 supportingSpeakableString:(id)arg2 systemImageName:(id)arg3 localeIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)supportingSpeakableString;
- (id)systemImageName;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (void)getResultWithCompletionHandler:(id /* block */)arg1;
- (id)localeXML;
- (id)parametersXML;

@end
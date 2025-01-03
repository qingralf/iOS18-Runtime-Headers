/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDVShared.framework/CoreIDVShared
 */

@interface StoredMobileDocumentReaderAuthenticationCertificate : NSManagedObject

@property (nonatomic, retain) StoredMobileDocumentReaderApplicationInstallation *applicationInstallation;
@property (nonatomic, retain) NSArray *certificateChain;
@property (nonatomic, copy) NSData *merchantLogo;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, retain) StoredMobileDocumentReaderSigningKey *signingKey;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

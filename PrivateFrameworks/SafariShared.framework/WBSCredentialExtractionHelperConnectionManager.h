/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCredentialExtractionHelperConnectionManager : NSObject {
    NSMutableSet * _clients;
    NSXPCConnection * _credentialExtractionHelperConnection;
}

@property (nonatomic, retain) NSXPCConnection *credentialExtractionHelperConnection;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)credentialExtractionHelperConnection;
- (id)credentialExtractionHelperConnectionRequestedByClient:(id)arg1;
- (id)init;
- (void)removeClient:(id)arg1;
- (void)setCredentialExtractionHelperConnection:(id)arg1;

@end

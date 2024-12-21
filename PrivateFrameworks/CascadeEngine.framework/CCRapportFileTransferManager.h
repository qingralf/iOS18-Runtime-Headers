/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeEngine.framework/CascadeEngine
 */

@interface CCRapportFileTransferManager : NSObject {
    <BMAccessAssertion> * _accessAssertion;
    NSURL * _directoryURL;
    NSObject<OS_dispatch_queue> * _fileTransferQueue;
    NSMutableDictionary * _fileTransferSessions;
}

@property (nonatomic, readonly) NSURL *directoryURL;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *fileTransferQueue;

+ (id)defaultInstance;

- (void).cxx_destruct;
- (id)buildFileTransferSessionWithTargetDeviceIdentifier:(id)arg1;
- (void)closeAllFileTransferSessions;
- (void)closeFileTransferSessionWithDeviceIdentifier:(id)arg1;
- (id)directoryURL;
- (id)fileTransferQueue;
- (id)initWithDirectoryURL:(id)arg1 accessAssertion:(id)arg2;
- (id)initiateFileTransferSesionBackToTargetDeviceWithIdentifier:(id)arg1 withExchangedPeerPublicKey:(id)arg2;

@end
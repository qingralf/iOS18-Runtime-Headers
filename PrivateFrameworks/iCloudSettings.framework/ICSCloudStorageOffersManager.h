/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudSettings.framework/iCloudSettings
 */

@interface ICSCloudStorageOffersManager : NSObject <PSCloudStorageOffersManagerDelegate> {
    PSCloudStorageOffersManager * _cloudStorageOffersManager;
    id /* block */  _completionHandler;
}

@property (nonatomic, retain) PSCloudStorageOffersManager *cloudStorageOffersManager;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cloudStorageOffersManager;
- (id /* block */)completionHandler;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)presentCloudStorageOffersPageFromNavigationController:(id)arg1 requiredStorageThreshold:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCloudStorageOffersManager:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end

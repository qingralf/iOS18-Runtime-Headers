/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSApplicationTrustFacade : NSObject <FBSApplicationTrustDataProvider> {
    FBSSignatureValidationService * _authoritativeProvider;
    <FBSApplicationTrustDataProvider> * _legacyProvider;
    <FBSApplicationTrustDataProvider> * _modernProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)trustStateForApplication:(id)arg1;

@end
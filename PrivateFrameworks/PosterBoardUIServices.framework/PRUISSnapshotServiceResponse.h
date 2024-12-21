/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardUIServices.framework/PosterBoardUIServices
 */

@interface PRUISSnapshotServiceResponse : NSObject <NSSecureCoding> {
    NSError * _error;
    PRUISSnapshotServiceRequest * _request;
    PFPosterPath * _snapshotBundlePath;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) PRUISSnapshotServiceRequest *request;
@property (nonatomic, readonly) <BSInvalidatable> *sandboxExtensionToken;
@property (nonatomic, readonly) PUIPosterSnapshotBundle *snapshotBundle;

+ (id)errorResponseForRequest:(id)arg1 error:(id)arg2;
+ (id)snapshotResponseForRequest:(id)arg1 snapshotBundle:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)request;
- (id)sandboxExtensionToken;
- (id)snapshotBundle;

@end
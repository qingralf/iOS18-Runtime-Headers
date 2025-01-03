/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDShareAccessRequestURLRequest : CKDURLRequest {
    id /* block */  _shareAccessRequestedBlock;
    NSMutableDictionary * _shareMetadataByRequestID;
    NSArray * _shareMetadatasToRequestAccess;
}

@property (nonatomic, copy) id /* block */ shareAccessRequestedBlock;
@property (nonatomic, retain) NSMutableDictionary *shareMetadataByRequestID;
@property (nonatomic, copy) NSArray *shareMetadatasToRequestAccess;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 shareMetadatasToRequestAccess:(id)arg2;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setShareAccessRequestedBlock:(id /* block */)arg1;
- (void)setShareMetadataByRequestID:(id)arg1;
- (void)setShareMetadatasToRequestAccess:(id)arg1;
- (id /* block */)shareAccessRequestedBlock;
- (id)shareMetadataByRequestID;
- (id)shareMetadatasToRequestAccess;

@end

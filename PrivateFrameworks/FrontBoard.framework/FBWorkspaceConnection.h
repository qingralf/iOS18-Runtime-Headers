/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceConnection : NSObject {
    FBWorkspace * _workspace;
    BSServiceConnection * _workspaceLock_connection;
    bool  _workspaceLock_valid;
    NSMutableArray * _workspaceLock_waitForConnectBlocks;
}

- (void).cxx_destruct;

@end
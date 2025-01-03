/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASSqliteDefaultErrorHandler : NSObject <_PASSqliteErrorHandlerProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_abortDueToSqliteError:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_ABORT:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_ABORT_ROLLBACK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_AUTH:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_AUTH_USER:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_BUSY:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_BUSY_RECOVERY:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_BUSY_SNAPSHOT:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CANTOPEN:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CANTOPEN_CONVPATH:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CANTOPEN_FULLPATH:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CANTOPEN_ISDIR:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CANTOPEN_NOTEMPDIR:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CONSTRAINT:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CONSTRAINT_CHECK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CONSTRAINT_COMMITHOOK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CONSTRAINT_FOREIGNKEY:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CONSTRAINT_FUNCTION:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CONSTRAINT_NOTNULL:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CONSTRAINT_PRIMARYKEY:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CONSTRAINT_ROWID:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CONSTRAINT_TRIGGER:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CONSTRAINT_UNIQUE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CONSTRAINT_VTAB:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CORRUPT:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_CORRUPT_VTAB:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_EMPTY:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_ERROR:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_FORMAT:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_FULL:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_INTERNAL:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_INTERRUPT:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_ACCESS:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_AUTH:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_BLOCKED:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_CHECKRESERVEDLOCK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_CLOSE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_CONVPATH:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_DELETE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_DELETE_NOENT:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_DIR_CLOSE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_DIR_FSYNC:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_FSTAT:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_FSYNC:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_GETTEMPPATH:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_LOCK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_MMAP:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_NOMEM:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_RDLOCK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_READ:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_SEEK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_SHMLOCK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_SHMMAP:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_SHMOPEN:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_SHMSIZE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_SHORT_READ:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_TRUNCATE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_UNLOCK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_VNODE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_IOERR_WRITE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_LOCKED:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_LOCKED_SHAREDCACHE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_MISMATCH:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_MISUSE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_NOLFS:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_NOMEM:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_NOTADB:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_NOTFOUND:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_NOTICE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_NOTICE_RECOVER_ROLLBACK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_NOTICE_RECOVER_WAL:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_PERM:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_PROTOCOL:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_RANGE:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_READONLY:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_READONLY_CANTLOCK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_READONLY_DBMOVED:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_READONLY_RECOVERY:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_READONLY_ROLLBACK:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_SCHEMA:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_TOOBIG:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_WARNING:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_SQLITE_WARNING_AUTOINDEX:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)_handle_UNKNOWN_ERROR:(id)arg1 onError:(id /* block */)arg2 db:(id)arg3;
- (bool)handleSqliteError:(int)arg1 error:(id)arg2 onError:(id /* block */)arg3 db:(id)arg4;

@end

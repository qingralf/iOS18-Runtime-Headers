/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWConcrete_nw_candidate_manager : NSObject <OS_nw_candidate_manager> {
    id /* block */  add_eligible_details;
    NSObject<OS_nw_endpoint> * awdl_endpoint;
    NSObject<OS_nw_resolver> * awdl_service_resolver;
    NSObject<OS_nw_array> * candidates;
    NWConcrete_nw_connection * connection;
    unsigned int  currently_using_awdl;
    NSMutableDictionary * hostname_resolvers;
    NSMutableDictionary * ids_candidates;
    NSObject<OS_nw_endpoint> * ids_endpoint;
    NSObject<OS_nw_path_evaluator> * ids_path_evaluator;
    NSObject<OS_nw_dictionary> * ids_resolve_registrations;
    NSObject<OS_nw_listener> * listener;
    unsigned long long  log_id;
    void * lost_path_timer;
    id /* block */  modify_ids_parameters;
    unsigned int  monitor_started;
    id /* block */  new_connection_handler;
    NSObject<OS_nw_endpoint> * original_remote_endpoint;
    NSObject<OS_nw_parameters> * parameters;
    id /* block */  remove_eligible_details;
    NSObject<OS_nw_endpoint> * service;
    NSObject<OS_nw_resolver> * service_resolver;
    unsigned int  should_connect;
    int  state;
    id /* block */  state_handler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)init:(id)arg1;

@end
// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "User-odb.hxx"

#include <cassert>
#include <cstring>  // std::memcpy


#include <odb/pgsql/traits.hxx>
#include <odb/pgsql/database.hxx>
#include <odb/pgsql/transaction.hxx>
#include <odb/pgsql/connection.hxx>
#include <odb/pgsql/statement.hxx>
#include <odb/pgsql/statement-cache.hxx>
#include <odb/pgsql/simple-object-statements.hxx>
#include <odb/pgsql/container-statements.hxx>
#include <odb/pgsql/exceptions.hxx>
#include <odb/pgsql/simple-object-result.hxx>

namespace odb
{
  // User
  //

  const char access::object_traits_impl< ::User, id_pgsql >::
  persist_statement_name[] = "persist_user";

  const char access::object_traits_impl< ::User, id_pgsql >::
  find_statement_name[] = "find_user";

  const char access::object_traits_impl< ::User, id_pgsql >::
  update_statement_name[] = "update_user";

  const char access::object_traits_impl< ::User, id_pgsql >::
  erase_statement_name[] = "erase_user";

  const char access::object_traits_impl< ::User, id_pgsql >::
  query_statement_name[] = "query_user";

  const char access::object_traits_impl< ::User, id_pgsql >::
  erase_query_statement_name[] = "erase_query_user";

  const unsigned int access::object_traits_impl< ::User, id_pgsql >::
  persist_statement_types[] =
  {
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::int8_oid,
    pgsql::int8_oid,
    pgsql::int2_oid,
    pgsql::text_oid,
    pgsql::int4_oid,
    pgsql::int4_oid,
    pgsql::int4_oid,
    pgsql::text_oid
  };

  const unsigned int access::object_traits_impl< ::User, id_pgsql >::
  find_statement_types[] =
  {
    pgsql::int8_oid
  };

  const unsigned int access::object_traits_impl< ::User, id_pgsql >::
  update_statement_types[] =
  {
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::int8_oid,
    pgsql::int8_oid,
    pgsql::int2_oid,
    pgsql::text_oid,
    pgsql::int4_oid,
    pgsql::int4_oid,
    pgsql::int4_oid,
    pgsql::text_oid,
    pgsql::int8_oid
  };

  const char alias_traits<  ::Timeline,
    id_pgsql,
    access::object_traits_impl< ::User, id_pgsql >::timeline_tag>::
  table_name[] = "\"timeline\"";

  struct access::object_traits_impl< ::User, id_pgsql >::extra_statement_cache_type
  {
    extra_statement_cache_type (
      pgsql::connection&,
      image_type&,
      id_image_type&,
      pgsql::binding&,
      pgsql::binding&,
      pgsql::native_binding&,
      const unsigned int*)
    {
    }
  };

  access::object_traits_impl< ::User, id_pgsql >::id_type
  access::object_traits_impl< ::User, id_pgsql >::
  id (const id_image_type& i)
  {
    pgsql::database* db (0);
    ODB_POTENTIALLY_UNUSED (db);

    id_type id;
    {
      pgsql::value_traits<
          long unsigned int,
          pgsql::id_bigint >::set_value (
        id,
        i.id_value,
        i.id_null);
    }

    return id;
  }

  access::object_traits_impl< ::User, id_pgsql >::id_type
  access::object_traits_impl< ::User, id_pgsql >::
  id (const image_type& i)
  {
    pgsql::database* db (0);
    ODB_POTENTIALLY_UNUSED (db);

    id_type id;
    {
      pgsql::value_traits<
          long unsigned int,
          pgsql::id_bigint >::set_value (
        id,
        i.id_value,
        i.id_null);
    }

    return id;
  }

  bool access::object_traits_impl< ::User, id_pgsql >::
  grow (image_type& i,
        bool* t)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (t);

    bool grew (false);

    // id_
    //
    t[0UL] = 0;

    // name_
    //
    if (t[1UL])
    {
      i.name_value.capacity (i.name_size);
      grew = true;
    }

    // email_
    //
    if (t[2UL])
    {
      i.email_value.capacity (i.email_size);
      grew = true;
    }

    // password_
    //
    if (t[3UL])
    {
      i.password_value.capacity (i.password_size);
      grew = true;
    }

    // timeline_
    //
    t[4UL] = 0;

    // create_date_
    //
    t[5UL] = 0;

    // activated_
    //
    t[6UL] = 0;

    // last_ip_
    //
    if (t[7UL])
    {
      i.last_ip_value.capacity (i.last_ip_size);
      grew = true;
    }

    // ones_
    //
    t[8UL] = 0;

    // twos_
    //
    t[9UL] = 0;

    // threes_
    //
    t[10UL] = 0;

    // client_key_
    //
    if (t[11UL])
    {
      i.client_key_value.capacity (i.client_key_size);
      grew = true;
    }

    return grew;
  }

  void access::object_traits_impl< ::User, id_pgsql >::
  bind (pgsql::bind* b,
        image_type& i,
        pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    std::size_t n (0);

    // id_
    //
    if (sk != statement_insert && sk != statement_update)
    {
      b[n].type = pgsql::bind::bigint;
      b[n].buffer = &i.id_value;
      b[n].is_null = &i.id_null;
      n++;
    }

    // name_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.name_value.data ();
    b[n].capacity = i.name_value.capacity ();
    b[n].size = &i.name_size;
    b[n].is_null = &i.name_null;
    n++;

    // email_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.email_value.data ();
    b[n].capacity = i.email_value.capacity ();
    b[n].size = &i.email_size;
    b[n].is_null = &i.email_null;
    n++;

    // password_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.password_value.data ();
    b[n].capacity = i.password_value.capacity ();
    b[n].size = &i.password_size;
    b[n].is_null = &i.password_null;
    n++;

    // timeline_
    //
    b[n].type = pgsql::bind::bigint;
    b[n].buffer = &i.timeline_value;
    b[n].is_null = &i.timeline_null;
    n++;

    // create_date_
    //
    b[n].type = pgsql::bind::bigint;
    b[n].buffer = &i.create_date_value;
    b[n].is_null = &i.create_date_null;
    n++;

    // activated_
    //
    b[n].type = pgsql::bind::smallint;
    b[n].buffer = &i.activated_value;
    b[n].is_null = &i.activated_null;
    n++;

    // last_ip_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.last_ip_value.data ();
    b[n].capacity = i.last_ip_value.capacity ();
    b[n].size = &i.last_ip_size;
    b[n].is_null = &i.last_ip_null;
    n++;

    // ones_
    //
    b[n].type = pgsql::bind::integer;
    b[n].buffer = &i.ones_value;
    b[n].is_null = &i.ones_null;
    n++;

    // twos_
    //
    b[n].type = pgsql::bind::integer;
    b[n].buffer = &i.twos_value;
    b[n].is_null = &i.twos_null;
    n++;

    // threes_
    //
    b[n].type = pgsql::bind::integer;
    b[n].buffer = &i.threes_value;
    b[n].is_null = &i.threes_null;
    n++;

    // client_key_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.client_key_value.data ();
    b[n].capacity = i.client_key_value.capacity ();
    b[n].size = &i.client_key_size;
    b[n].is_null = &i.client_key_null;
    n++;
  }

  void access::object_traits_impl< ::User, id_pgsql >::
  bind (pgsql::bind* b, id_image_type& i)
  {
    std::size_t n (0);
    b[n].type = pgsql::bind::bigint;
    b[n].buffer = &i.id_value;
    b[n].is_null = &i.id_null;
  }

  bool access::object_traits_impl< ::User, id_pgsql >::
  init (image_type& i,
        const object_type& o,
        pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    bool grew (false);

    // name_
    //
    {
      ::std::string const& v =
        o.name_;

      bool is_null (false);
      std::size_t size (0);
      std::size_t cap (i.name_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.name_value,
        size,
        is_null,
        v);
      i.name_null = is_null;
      i.name_size = size;
      grew = grew || (cap != i.name_value.capacity ());
    }

    // email_
    //
    {
      ::std::string const& v =
        o.email_;

      bool is_null (false);
      std::size_t size (0);
      std::size_t cap (i.email_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.email_value,
        size,
        is_null,
        v);
      i.email_null = is_null;
      i.email_size = size;
      grew = grew || (cap != i.email_value.capacity ());
    }

    // password_
    //
    {
      ::std::string const& v =
        o.password_;

      bool is_null (false);
      std::size_t size (0);
      std::size_t cap (i.password_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.password_value,
        size,
        is_null,
        v);
      i.password_null = is_null;
      i.password_size = size;
      grew = grew || (cap != i.password_value.capacity ());
    }

    // timeline_
    //
    {
      ::std::shared_ptr< ::Timeline > const& v =
        o.timeline_;

      typedef object_traits< ::Timeline > obj_traits;
      typedef odb::pointer_traits< ::std::shared_ptr< ::Timeline > > ptr_traits;

      bool is_null (ptr_traits::null_ptr (v));
      if (!is_null)
      {
        const obj_traits::id_type& id (
          obj_traits::id (ptr_traits::get_ref (v)));

        pgsql::value_traits<
            obj_traits::id_type,
            pgsql::id_bigint >::set_image (
          i.timeline_value, is_null, id);
        i.timeline_null = is_null;
      }
      else
        throw null_pointer ();
    }

    // create_date_
    //
    {
      ::time_t const& v =
        o.create_date_;

      bool is_null (false);
      pgsql::value_traits<
          ::time_t,
          pgsql::id_bigint >::set_image (
        i.create_date_value, is_null, v);
      i.create_date_null = is_null;
    }

    // activated_
    //
    {
      short int const& v =
        o.activated_;

      bool is_null (false);
      pgsql::value_traits<
          short int,
          pgsql::id_smallint >::set_image (
        i.activated_value, is_null, v);
      i.activated_null = is_null;
    }

    // last_ip_
    //
    {
      ::std::string const& v =
        o.last_ip_;

      bool is_null (false);
      std::size_t size (0);
      std::size_t cap (i.last_ip_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.last_ip_value,
        size,
        is_null,
        v);
      i.last_ip_null = is_null;
      i.last_ip_size = size;
      grew = grew || (cap != i.last_ip_value.capacity ());
    }

    // ones_
    //
    {
      unsigned int const& v =
        o.ones_;

      bool is_null (false);
      pgsql::value_traits<
          unsigned int,
          pgsql::id_integer >::set_image (
        i.ones_value, is_null, v);
      i.ones_null = is_null;
    }

    // twos_
    //
    {
      unsigned int const& v =
        o.twos_;

      bool is_null (false);
      pgsql::value_traits<
          unsigned int,
          pgsql::id_integer >::set_image (
        i.twos_value, is_null, v);
      i.twos_null = is_null;
    }

    // threes_
    //
    {
      unsigned int const& v =
        o.threes_;

      bool is_null (false);
      pgsql::value_traits<
          unsigned int,
          pgsql::id_integer >::set_image (
        i.threes_value, is_null, v);
      i.threes_null = is_null;
    }

    // client_key_
    //
    {
      ::std::string const& v =
        o.client_key_;

      bool is_null (false);
      std::size_t size (0);
      std::size_t cap (i.client_key_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.client_key_value,
        size,
        is_null,
        v);
      i.client_key_null = is_null;
      i.client_key_size = size;
      grew = grew || (cap != i.client_key_value.capacity ());
    }

    return grew;
  }

  void access::object_traits_impl< ::User, id_pgsql >::
  init (object_type& o,
        const image_type& i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // id_
    //
    {
      long unsigned int& v =
        o.id_;

      pgsql::value_traits<
          long unsigned int,
          pgsql::id_bigint >::set_value (
        v,
        i.id_value,
        i.id_null);
    }

    // name_
    //
    {
      ::std::string& v =
        o.name_;

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.name_value,
        i.name_size,
        i.name_null);
    }

    // email_
    //
    {
      ::std::string& v =
        o.email_;

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.email_value,
        i.email_size,
        i.email_null);
    }

    // password_
    //
    {
      ::std::string& v =
        o.password_;

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.password_value,
        i.password_size,
        i.password_null);
    }

    // timeline_
    //
    {
      ::std::shared_ptr< ::Timeline >& v =
        o.timeline_;

      typedef object_traits< ::Timeline > obj_traits;
      typedef odb::pointer_traits< ::std::shared_ptr< ::Timeline > > ptr_traits;

      if (i.timeline_null)
        v = ptr_traits::pointer_type ();
      else
      {
        obj_traits::id_type id;
        pgsql::value_traits<
            obj_traits::id_type,
            pgsql::id_bigint >::set_value (
          id,
          i.timeline_value,
          i.timeline_null);

        // If a compiler error points to the line below, then
        // it most likely means that a pointer used in a member
        // cannot be initialized from an object pointer.
        //
        v = ptr_traits::pointer_type (
          static_cast<pgsql::database*> (db)->load<
            obj_traits::object_type > (id));
      }
    }

    // create_date_
    //
    {
      ::time_t& v =
        o.create_date_;

      pgsql::value_traits<
          ::time_t,
          pgsql::id_bigint >::set_value (
        v,
        i.create_date_value,
        i.create_date_null);
    }

    // activated_
    //
    {
      short int& v =
        o.activated_;

      pgsql::value_traits<
          short int,
          pgsql::id_smallint >::set_value (
        v,
        i.activated_value,
        i.activated_null);
    }

    // last_ip_
    //
    {
      ::std::string& v =
        o.last_ip_;

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.last_ip_value,
        i.last_ip_size,
        i.last_ip_null);
    }

    // ones_
    //
    {
      unsigned int& v =
        o.ones_;

      pgsql::value_traits<
          unsigned int,
          pgsql::id_integer >::set_value (
        v,
        i.ones_value,
        i.ones_null);
    }

    // twos_
    //
    {
      unsigned int& v =
        o.twos_;

      pgsql::value_traits<
          unsigned int,
          pgsql::id_integer >::set_value (
        v,
        i.twos_value,
        i.twos_null);
    }

    // threes_
    //
    {
      unsigned int& v =
        o.threes_;

      pgsql::value_traits<
          unsigned int,
          pgsql::id_integer >::set_value (
        v,
        i.threes_value,
        i.threes_null);
    }

    // client_key_
    //
    {
      ::std::string& v =
        o.client_key_;

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.client_key_value,
        i.client_key_size,
        i.client_key_null);
    }
  }

  void access::object_traits_impl< ::User, id_pgsql >::
  init (id_image_type& i, const id_type& id)
  {
    {
      bool is_null (false);
      pgsql::value_traits<
          long unsigned int,
          pgsql::id_bigint >::set_image (
        i.id_value, is_null, id);
      i.id_null = is_null;
    }
  }

  const char access::object_traits_impl< ::User, id_pgsql >::persist_statement[] =
  "INSERT INTO \"user\" "
  "(\"id\", "
  "\"name\", "
  "\"email\", "
  "\"password\", "
  "\"timeline\", "
  "\"create_date\", "
  "\"activated\", "
  "\"last_ip\", "
  "\"ones\", "
  "\"twos\", "
  "\"threes\", "
  "\"client_key\") "
  "VALUES "
  "(DEFAULT, $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11) "
  "RETURNING \"id\"";

  const char access::object_traits_impl< ::User, id_pgsql >::find_statement[] =
  "SELECT "
  "\"user\".\"id\", "
  "\"user\".\"name\", "
  "\"user\".\"email\", "
  "\"user\".\"password\", "
  "\"user\".\"timeline\", "
  "\"user\".\"create_date\", "
  "\"user\".\"activated\", "
  "\"user\".\"last_ip\", "
  "\"user\".\"ones\", "
  "\"user\".\"twos\", "
  "\"user\".\"threes\", "
  "\"user\".\"client_key\" "
  "FROM \"user\" "
  "WHERE \"user\".\"id\"=$1";

  const char access::object_traits_impl< ::User, id_pgsql >::update_statement[] =
  "UPDATE \"user\" "
  "SET "
  "\"name\"=$1, "
  "\"email\"=$2, "
  "\"password\"=$3, "
  "\"timeline\"=$4, "
  "\"create_date\"=$5, "
  "\"activated\"=$6, "
  "\"last_ip\"=$7, "
  "\"ones\"=$8, "
  "\"twos\"=$9, "
  "\"threes\"=$10, "
  "\"client_key\"=$11 "
  "WHERE \"id\"=$12";

  const char access::object_traits_impl< ::User, id_pgsql >::erase_statement[] =
  "DELETE FROM \"user\" "
  "WHERE \"id\"=$1";

  const char access::object_traits_impl< ::User, id_pgsql >::query_statement[] =
  "SELECT\n"
  "\"user\".\"id\",\n"
  "\"user\".\"name\",\n"
  "\"user\".\"email\",\n"
  "\"user\".\"password\",\n"
  "\"user\".\"timeline\",\n"
  "\"user\".\"create_date\",\n"
  "\"user\".\"activated\",\n"
  "\"user\".\"last_ip\",\n"
  "\"user\".\"ones\",\n"
  "\"user\".\"twos\",\n"
  "\"user\".\"threes\",\n"
  "\"user\".\"client_key\"\n"
  "FROM \"user\"\n"
  "LEFT JOIN \"timeline\" AS \"timeline\" ON \"timeline\".\"id\"=\"user\".\"timeline\"";

  const char access::object_traits_impl< ::User, id_pgsql >::erase_query_statement[] =
  "DELETE FROM \"user\"";

  const char access::object_traits_impl< ::User, id_pgsql >::table_name[] =
  "\"user\"";

  void access::object_traits_impl< ::User, id_pgsql >::
  persist (database& db, object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace pgsql;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    callback (db,
              static_cast<const object_type&> (obj),
              callback_event::pre_persist);

    image_type& im (sts.image ());
    binding& imb (sts.insert_image_binding ());

    if (init (im, obj, statement_insert))
      im.version++;

    if (im.version != sts.insert_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_insert);
      sts.insert_image_version (im.version);
      imb.version++;
    }

    {
      id_image_type& i (sts.id_image ());
      binding& b (sts.id_image_binding ());
      if (i.version != sts.id_image_version () || b.version == 0)
      {
        bind (b.bind, i);
        sts.id_image_version (i.version);
        b.version++;
      }
    }

    insert_statement& st (sts.persist_statement ());
    if (!st.execute ())
      throw object_already_persistent ();

    obj.id_ = id (sts.id_image ());

    callback (db,
              static_cast<const object_type&> (obj),
              callback_event::post_persist);
  }

  void access::object_traits_impl< ::User, id_pgsql >::
  update (database& db, const object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace pgsql;
    using pgsql::update_statement;

    callback (db, obj, callback_event::pre_update);

    pgsql::transaction& tr (pgsql::transaction::current ());
    pgsql::connection& conn (tr.connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    const id_type& id (
      obj.id_);
    id_image_type& idi (sts.id_image ());
    init (idi, id);

    image_type& im (sts.image ());
    if (init (im, obj, statement_update))
      im.version++;

    bool u (false);
    binding& imb (sts.update_image_binding ());
    if (im.version != sts.update_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_update);
      sts.update_image_version (im.version);
      imb.version++;
      u = true;
    }

    binding& idb (sts.id_image_binding ());
    if (idi.version != sts.update_id_image_version () ||
        idb.version == 0)
    {
      if (idi.version != sts.id_image_version () ||
          idb.version == 0)
      {
        bind (idb.bind, idi);
        sts.id_image_version (idi.version);
        idb.version++;
      }

      sts.update_id_image_version (idi.version);

      if (!u)
        imb.version++;
    }

    update_statement& st (sts.update_statement ());
    if (st.execute () == 0)
      throw object_not_persistent ();

    callback (db, obj, callback_event::post_update);
    pointer_cache_traits::update (db, obj);
  }

  void access::object_traits_impl< ::User, id_pgsql >::
  erase (database& db, const id_type& id)
  {
    using namespace pgsql;

    ODB_POTENTIALLY_UNUSED (db);

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    id_image_type& i (sts.id_image ());
    init (i, id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    if (sts.erase_statement ().execute () != 1)
      throw object_not_persistent ();

    pointer_cache_traits::erase (db, id);
  }

  access::object_traits_impl< ::User, id_pgsql >::pointer_type
  access::object_traits_impl< ::User, id_pgsql >::
  find (database& db, const id_type& id)
  {
    using namespace pgsql;

    {
      pointer_type p (pointer_cache_traits::find (db, id));

      if (!pointer_traits::null_ptr (p))
        return p;
    }

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    if (l.locked ())
    {
      if (!find_ (sts, &id))
        return pointer_type ();
    }

    pointer_type p (
      access::object_factory<object_type, pointer_type>::create ());
    pointer_traits::guard pg (p);

    pointer_cache_traits::insert_guard ig (
      pointer_cache_traits::insert (db, id, p));

    object_type& obj (pointer_traits::get_ref (p));

    if (l.locked ())
    {
      select_statement& st (sts.find_statement ());
      ODB_POTENTIALLY_UNUSED (st);

      callback (db, obj, callback_event::pre_load);
      init (obj, sts.image (), &db);
      load_ (sts, obj, false);
      sts.load_delayed (0);
      l.unlock ();
      callback (db, obj, callback_event::post_load);
      pointer_cache_traits::load (ig.position ());
    }
    else
      sts.delay_load (id, obj, ig.position ());

    ig.release ();
    pg.release ();
    return p;
  }

  bool access::object_traits_impl< ::User, id_pgsql >::
  find (database& db, const id_type& id, object_type& obj)
  {
    using namespace pgsql;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    if (!find_ (sts, &id))
      return false;

    select_statement& st (sts.find_statement ());
    ODB_POTENTIALLY_UNUSED (st);

    reference_cache_traits::position_type pos (
      reference_cache_traits::insert (db, id, obj));
    reference_cache_traits::insert_guard ig (pos);

    callback (db, obj, callback_event::pre_load);
    init (obj, sts.image (), &db);
    load_ (sts, obj, false);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    reference_cache_traits::load (pos);
    ig.release ();
    return true;
  }

  bool access::object_traits_impl< ::User, id_pgsql >::
  reload (database& db, object_type& obj)
  {
    using namespace pgsql;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    const id_type& id  (
      obj.id_);

    if (!find_ (sts, &id))
      return false;

    select_statement& st (sts.find_statement ());
    ODB_POTENTIALLY_UNUSED (st);

    callback (db, obj, callback_event::pre_load);
    init (obj, sts.image (), &db);
    load_ (sts, obj, true);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    return true;
  }

  bool access::object_traits_impl< ::User, id_pgsql >::
  find_ (statements_type& sts,
         const id_type* id)
  {
    using namespace pgsql;

    id_image_type& i (sts.id_image ());
    init (i, *id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    image_type& im (sts.image ());
    binding& imb (sts.select_image_binding ());

    if (im.version != sts.select_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_select);
      sts.select_image_version (im.version);
      imb.version++;
    }

    select_statement& st (sts.find_statement ());

    st.execute ();
    auto_result ar (st);
    select_statement::result r (st.fetch ());

    if (r == select_statement::truncated)
    {
      if (grow (im, sts.select_image_truncated ()))
        im.version++;

      if (im.version != sts.select_image_version ())
      {
        bind (imb.bind, im, statement_select);
        sts.select_image_version (im.version);
        imb.version++;
        st.refetch ();
      }
    }

    return r != select_statement::no_data;
  }

  result< access::object_traits_impl< ::User, id_pgsql >::object_type >
  access::object_traits_impl< ::User, id_pgsql >::
  query (database&, const query_base_type& q)
  {
    using namespace pgsql;
    using odb::details::shared;
    using odb::details::shared_ptr;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());

    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    image_type& im (sts.image ());
    binding& imb (sts.select_image_binding ());

    if (im.version != sts.select_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_select);
      sts.select_image_version (im.version);
      imb.version++;
    }

    std::string text (query_statement);
    if (!q.empty ())
    {
      text += "\n";
      text += q.clause ();
    }

    q.init_parameters ();
    shared_ptr<select_statement> st (
      new (shared) select_statement (
        sts.connection (),
        query_statement_name,
        text,
        true,
        true,
        q.parameter_types (),
        q.parameter_count (),
        q.parameters_binding (),
        imb));

    st->execute ();
    st->deallocate ();

    shared_ptr< odb::object_result_impl<object_type> > r (
      new (shared) pgsql::object_result_impl<object_type> (
        q, st, sts, 0));

    return result<object_type> (r);
  }

  unsigned long long access::object_traits_impl< ::User, id_pgsql >::
  erase_query (database&, const query_base_type& q)
  {
    using namespace pgsql;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());

    std::string text (erase_query_statement);
    if (!q.empty ())
    {
      text += ' ';
      text += q.clause ();
    }

    q.init_parameters ();
    delete_statement st (
      conn,
      erase_query_statement_name,
      text,
      q.parameter_types (),
      q.parameter_count (),
      q.parameters_binding ());

    return st.execute ();
  }
}

#include <odb/post.hxx>

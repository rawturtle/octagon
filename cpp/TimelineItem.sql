/* This file was generated by ODB, object-relational mapping (ORM)
 * compiler for C++.
 */

DROP TABLE IF EXISTS "timelineitem" CASCADE;

CREATE TABLE "timelineitem" (
  "id" BIGSERIAL NOT NULL PRIMARY KEY,
  "type" SMALLINT NOT NULL,
  "description" VARCHAR(128) NOT NULL,
  "location" VARCHAR(128) NOT NULL,
  "start" BIGINT NOT NULL,
  "end" BIGINT NOT NULL);


.. -*- rst -*-

====================
Job binary internals
====================

Job binary internal objects represent data processing applications
and libraries that are stored in the internal database.


Create job binary internal
==========================

.. rest_method::  PUT /v1.1/{tenant_id}/job-binary-internals/{name}

Creates a job binary internal.

Job binary internals are objects that represent data processing
applications and libraries that are stored in the internal
database.

Specify the file contents (raw data or script text) in the request
body. Specify the file name in the URI.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - name: name


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - name: name
   - tenant_id: tenant_id
   - created_at: created_at
   - updated_at: updated_at
   - is_protected: is_protected
   - is_public: is_public
   - datasize: datasize
   - id: id





Show job binary internal data
=============================

.. rest_method::  GET /v1.1/{tenant_id}/job-binary-internals/{job_binary_internals_id}/data

Shows data for a job binary internal.

The response body shows the job binary raw data and the response
headers show the data length.

Example response:

::

   HTTP/1.1 200 OK
   Connection: keep-alive
   Content-Length: 161
   Content-Type: text/html; charset=utf-8
   Date: Sat, 28 Mar 2016 02:21:13 GMT
   A = load '$INPUT' using PigStorage(':') as (fruit: chararray);
   B = foreach A generate com.hadoopbook.pig.Trim(fruit);
   store B into '$OUTPUT' USING PigStorage();


Normal response codes: 200
Error response codes:


Request
-------

.. rest_parameters:: parameters.yaml

   - job_binary_internals_id: job_binary_internals_id


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - Content-Length: Content-Length



Response Example
----------------

.. literalinclude:: 
   :language: javascript




Show job binary internal details
================================

.. rest_method::  GET /v1.1/{tenant_id}/job-binary-internals/{job_binary_internals_id}

Shows details for a job binary internal.


Normal response codes: 200
Error response codes:


Request
-------

.. rest_parameters:: parameters.yaml

   - job_binary_internals_id: job_binary_internals_id


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - name: name
   - tenant_id: tenant_id
   - created_at: created_at
   - updated_at: updated_at
   - is_protected: is_protected
   - is_public: is_public
   - datasize: datasize
   - id: id



Response Example
----------------

.. literalinclude:: ../samples/job-binary-internals/show-response.json
   :language: javascript




Delete job binary internal
==========================

.. rest_method::  DELETE /v1.1/{tenant_id}/job-binary-internals/{job_binary_internals_id}

Deletes a job binary internal.

Error response codes:204,


Request
-------

.. rest_parameters:: parameters.yaml

   - job_binary_internals_id: job_binary_internals_id






Update job binary internal
==========================

.. rest_method::  PATCH /v1.1/{tenant_id}/job-binary-internals/{job_binary_internals_id}

Updates a job binary internal.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - job_binary_internals_id: job_binary_internals_id

Request Example
---------------

.. literalinclude:: ../samples/job-binary-internals/update-request.json
   :language: javascript







List job binary internals
=========================

.. rest_method::  GET /v1.1/{tenant_id}/job-binary-internals

Lists the available job binary internals.


Normal response codes: 200
Error response codes:


Request
-------

.. rest_parameters:: parameters.yaml



Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - binaries: binaries
   - name: name
   - tenant_id: tenant_id
   - created_at: created_at
   - updated_at: updated_at
   - is_protected: is_protected
   - is_public: is_public
   - datasize: datasize
   - id: id



Response Example
----------------

.. literalinclude:: ../samples/job-binary-internals/list-response.json
   :language: javascript



